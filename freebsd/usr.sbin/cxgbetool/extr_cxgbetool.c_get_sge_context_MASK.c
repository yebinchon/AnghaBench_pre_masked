
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_sge_context {long cid; int mem_id; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct t4_sge_context*) ;
 int FUNC_1 (struct t4_sge_context*) ;
 int FUNC_2 (struct t4_sge_context*,int) ;
 char* FUNC_3 (char const*,long*,int *) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(int VAR_7, const char *VAR_8[])
{
 int VAR_9;
 char *VAR_10;
 long VAR_11;
 struct t4_sge_context VAR_12 = {0};

 if (VAR_7 != 2) {
  FUNC_5("sge_context: incorrect number of arguments.");
  return (VAR_1);
 }

 if (!FUNC_4(VAR_8[0], "egress"))
  VAR_12.mem_id = VAR_3;
 else if (!FUNC_4(VAR_8[0], "ingress"))
  VAR_12.mem_id = VAR_5;
 else if (!FUNC_4(VAR_8[0], "fl"))
  VAR_12.mem_id = VAR_4;
 else if (!FUNC_4(VAR_8[0], "cong"))
  VAR_12.mem_id = VAR_2;
 else {
  FUNC_5("unknown context type \"%s\"; known types are egress, "
      "ingress, fl, and cong.", VAR_8[0]);
  return (VAR_1);
 }

 VAR_10 = FUNC_3(VAR_8[1], &VAR_11, ((void*)0));
 if (*VAR_10) {
  FUNC_5("invalid context id \"%s\"", VAR_8[1]);
  return (VAR_1);
 }
 VAR_12.cid = VAR_11;

 VAR_9 = FUNC_0(VAR_0, &VAR_12);
 if (VAR_9 != 0)
  return (VAR_9);

 if (VAR_6 == 4)
  FUNC_1(&VAR_12);
 else
  FUNC_2(&VAR_12, VAR_6);

 return (0);
}
