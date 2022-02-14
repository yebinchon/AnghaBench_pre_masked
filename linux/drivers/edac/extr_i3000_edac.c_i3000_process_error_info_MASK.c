
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {TYPE_1__** csrows; } ;
struct i3000_error_info {int errsts; int errsts2; int derrsyn; int deap; int edeap; } ;
struct TYPE_2__ {int nr_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mem_ctl_info*,unsigned long) ;
 int FUNC_4 (int ,struct mem_ctl_info*,int,unsigned long,unsigned long,int ,int,int,int,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct mem_ctl_info *VAR_4,
    struct i3000_error_info *VAR_5,
    int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10, VAR_11;

 VAR_8 = VAR_4->csrows[0]->nr_channels - 1;

 if (!(VAR_5->errsts & VAR_2))
  return 0;

 if (!VAR_6)
  return 1;

 if ((VAR_5->errsts ^ VAR_5->errsts2) & VAR_2) {
  FUNC_4(VAR_1, VAR_4, 1, 0, 0, 0,
         -1, -1, -1,
         "UE overwrote CE", "");
  VAR_5->errsts = VAR_5->errsts2;
 }

 VAR_10 = FUNC_2(VAR_5->edeap, VAR_5->deap);
 VAR_11 = FUNC_1(VAR_5->deap);
 VAR_9 = FUNC_0(VAR_5->deap);

 VAR_7 = FUNC_3(VAR_4, VAR_10);

 if (VAR_5->errsts & VAR_3)
  FUNC_4(VAR_1, VAR_4, 1,
         VAR_10, VAR_11, 0,
         VAR_7, -1, -1,
         "i3000 UE", "");
 else
  FUNC_4(VAR_0, VAR_4, 1,
         VAR_10, VAR_11, VAR_5->derrsyn,
         VAR_7, VAR_8 ? VAR_9 : 0, -1,
         "i3000 CE", "");

 return 1;
}
