
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0(int VAR_0)
{
 switch(VAR_0)
 {
  case 130:
  return "SCHED_FIFO";

  case 128:
  return "SCHED_RR";

  case 129:
  return "SCHED_OTHER";

  default:
  return "Illegal scheduler value";
 }
}
