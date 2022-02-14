
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_i2c_data {long port_id; long dev_addr; long offset; long len; int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int ,struct t4_i2c_data*) ;
 int FUNC_1 (char*,int,int) ;
 char* FUNC_2 (char const*,long*,int *) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(int VAR_3, const char *VAR_4[])
{
 char *VAR_5;
 long VAR_6;
 struct t4_i2c_data VAR_7;
 int VAR_8, VAR_9;

 if (VAR_3 < 3 || VAR_3 > 4) {
  FUNC_3("incorrect number of arguments.");
  return (VAR_1);
 }

 VAR_5 = FUNC_2(VAR_4[0], &VAR_6, ((void*)0));
 if (*VAR_5 || VAR_6 > VAR_2) {
  FUNC_3("invalid port id \"%s\"", VAR_4[0]);
  return (VAR_1);
 }
 VAR_7.port_id = VAR_6;

 VAR_5 = FUNC_2(VAR_4[1], &VAR_6, ((void*)0));
 if (*VAR_5 || VAR_6 > VAR_2) {
  FUNC_3("invalid i2c device address \"%s\"", VAR_4[1]);
  return (VAR_1);
 }
 VAR_7.dev_addr = VAR_6;

 VAR_5 = FUNC_2(VAR_4[2], &VAR_6, ((void*)0));
 if (*VAR_5 || VAR_6 > VAR_2) {
  FUNC_3("invalid byte offset \"%s\"", VAR_4[2]);
  return (VAR_1);
 }
 VAR_7.offset = VAR_6;

 if (VAR_3 == 4) {
  VAR_5 = FUNC_2(VAR_4[3], &VAR_6, ((void*)0));
  if (*VAR_5 || VAR_6 > sizeof(VAR_7.data)) {
   FUNC_3("invalid number of bytes \"%s\"", VAR_4[3]);
   return (VAR_1);
  }
  VAR_7.len = VAR_6;
 } else
  VAR_7.len = 1;

 VAR_8 = FUNC_0(VAR_0, &VAR_7);
 if (VAR_8 != 0)
  return (VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_7.len; VAR_9++)
  FUNC_1("0x%x [%u]\n", VAR_7.data[VAR_9], VAR_7.data[VAR_9]);

 return (0);
}
