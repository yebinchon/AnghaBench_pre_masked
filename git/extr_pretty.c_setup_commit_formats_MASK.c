
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmt_fmt_map {char* member_0; int member_2; int member_3; int member_1; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct cmt_fmt_map*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,struct cmt_fmt_map*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int *) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct cmt_fmt_map VAR_13[] = {
  { "raw", VAR_6, 0, 0 },
  { "medium", VAR_4, 0, 8 },
  { "short", VAR_7, 0, 0 },
  { "email", VAR_0, 0, 0 },
  { "mboxrd", VAR_3, 0, 0 },
  { "fuller", VAR_2, 0, 8 },
  { "full", VAR_1, 0, 8 },
  { "oneline", VAR_5, 1, 0 }




 };
 VAR_11 = FUNC_1(VAR_13);
 VAR_8 = VAR_11;
 FUNC_0(VAR_9, VAR_11, VAR_10);
 FUNC_2(VAR_9, VAR_13,
     FUNC_1(VAR_13));

 FUNC_3(VAR_12, ((void*)0));
}
