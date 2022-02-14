
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const* const*) ;
const char *FUNC_1(int VAR_0)
{
 static const char *const VAR_1[] = {
  [134] = "no error",
  [133] = "conflict error",
  [132] = "data error",
  [128] = "type error",
  [137] = "address error",
  [129] = "send error",
  [135] = "timeout",
  [136] = "busy",
  [131] = "bus reset",
  [130] = "no ack",
 };

 if ((unsigned int)VAR_0 < FUNC_0(VAR_1) && VAR_1[VAR_0])
  return VAR_1[VAR_0];
 else
  return "unknown";
}
