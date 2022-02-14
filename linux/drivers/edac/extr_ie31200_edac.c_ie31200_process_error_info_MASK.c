
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_ctl_info {int dummy; } ;
struct ie31200_error_info {int errsts; int errsts2; int* eccerrlog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct mem_ctl_info*,int,int ,int ,int ,int,int,int,char*,char*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_6,
           struct ie31200_error_info *VAR_7)
{
 int VAR_8;
 u64 VAR_9;

 if (!(VAR_7->errsts & VAR_4))
  return;

 if ((VAR_7->errsts ^ VAR_7->errsts2) & VAR_4) {
  FUNC_2(VAR_1, VAR_6, 1, 0, 0, 0,
         -1, -1, -1, "UE overwrote CE", "");
  VAR_7->errsts = VAR_7->errsts2;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_9 = VAR_7->eccerrlog[VAR_8];
  if (VAR_9 & VAR_3) {
   FUNC_2(VAR_1, VAR_6, 1,
          0, 0, 0,
          FUNC_1(VAR_9),
          VAR_8, -1,
          "ie31200 UE", "");
  } else if (VAR_9 & VAR_2) {
   FUNC_2(VAR_0, VAR_6, 1,
          0, 0,
          FUNC_0(VAR_9),
          FUNC_1(VAR_9),
          VAR_8, -1,
          "ie31200 CE", "");
  }
 }
}
