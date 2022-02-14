
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(int VAR_0)
{
 switch (VAR_0) {
 case 130: return "read";
 case 128: return "write";
 case 132: return "disconnect";
 case 131: return "flush";
 case 129: return "trim/discard";
 }
 return "invalid";
}
