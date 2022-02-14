
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct t4_sched_queue {int queue; int cl; scalar_t__ port; int member_0; } ;
typedef void* int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int ,struct t4_sched_queue*) ;
 char* FUNC_1 (char const*,long*,int *) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(int VAR_3, const char *VAR_4[])
{
 struct t4_sched_queue VAR_5 = {0};
 char *VAR_6;
 long VAR_7;

 if (VAR_3 != 3) {

  FUNC_3("incorrect number of arguments.");
  return (VAR_1);
 }

 VAR_6 = FUNC_1(VAR_4[0], &VAR_7, ((void*)0));
 if (*VAR_6 || VAR_7 > VAR_2) {
  FUNC_3("invalid port id \"%s\"", VAR_4[0]);
  return (VAR_1);
 }
 VAR_5.port = (uint8_t)VAR_7;

 if (!FUNC_2(VAR_4[1], "all") || !FUNC_2(VAR_4[1], "*"))
  VAR_5.queue = -1;
 else {
  VAR_6 = FUNC_1(VAR_4[1], &VAR_7, ((void*)0));
  if (*VAR_6 || VAR_7 < -1) {
   FUNC_3("invalid queue \"%s\"", VAR_4[1]);
   return (VAR_1);
  }
  VAR_5.queue = (int8_t)VAR_7;
 }

 if (!FUNC_2(VAR_4[2], "unbind") || !FUNC_2(VAR_4[2], "clear"))
  VAR_5.cl = -1;
 else {
  VAR_6 = FUNC_1(VAR_4[2], &VAR_7, ((void*)0));
  if (*VAR_6 || VAR_7 < -1) {
   FUNC_3("invalid class \"%s\"", VAR_4[2]);
   return (VAR_1);
  }
  VAR_5.cl = (int8_t)VAR_7;
 }

 return FUNC_0(VAR_0, &VAR_5);
}
