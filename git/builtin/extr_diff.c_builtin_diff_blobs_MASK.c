
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int diffopt; } ;
struct object_array_entry {unsigned int mode; TYPE_1__* item; } ;
struct TYPE_2__ {int oid; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct object_array_entry*) ;
 int VAR_2 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int,unsigned int,int *,int *,int,int,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct rev_info *VAR_3,
         int VAR_4, const char **VAR_5,
         struct object_array_entry **VAR_6)
{
 const unsigned VAR_7 = FUNC_1(VAR_1 | 0644);

 if (VAR_4 > 1)
  FUNC_5(VAR_2);

 if (VAR_6[0]->mode == VAR_0)
  VAR_6[0]->mode = VAR_7;

 if (VAR_6[1]->mode == VAR_0)
  VAR_6[1]->mode = VAR_7;

 FUNC_4(&VAR_3->diffopt,
       VAR_6[0]->mode, VAR_6[1]->mode,
       &VAR_6[0]->item->oid, &VAR_6[1]->item->oid,
       1, 1,
       FUNC_0(VAR_6[0]), FUNC_0(VAR_6[1]));
 FUNC_3(&VAR_3->diffopt);
 FUNC_2(&VAR_3->diffopt);
 return 0;
}
