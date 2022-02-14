
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bh_event {char* action; char* name; char* seen; } ;


 int FUNC_0 (struct bh_event*,int ,char*,char*) ;
 char* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct bh_event *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0, 0, "HOME=%s", "/");
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, 0, "PATH=%s",
     "/sbin:/bin:/usr/sbin:/usr/bin");
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, 0, "SUBSYSTEM=%s", "button");
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, 0, "ACTION=%s", VAR_0->action);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, 0, "BUTTON=%s", VAR_0->name);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, 0, "SEEN=%ld", VAR_0->seen);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, 0, "SEQNUM=%llu", FUNC_1());

 return VAR_1;
}
