
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_header {int dummy; } ;





 int FUNC_0 (int ,struct pack_header*) ;

__attribute__((used)) static const char *FUNC_1(struct pack_header *VAR_0)
{
 switch (FUNC_0(0, VAR_0)) {
 case 130:
  return "eof before pack header was fully read";

 case 129:
  return "protocol error (pack signature mismatch detected)";

 case 128:
  return "protocol error (pack version unsupported)";

 default:
  return "unknown error in parse_pack_header";

 case 0:
  return ((void*)0);
 }
}
