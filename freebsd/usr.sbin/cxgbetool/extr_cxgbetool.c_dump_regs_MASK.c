
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct t4_regdump {int version; int * data; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int ,struct t4_regdump*) ;
 int FUNC_2 (int,char const**,int *) ;
 int FUNC_3 (int,char const**,int *) ;
 int FUNC_4 (int,char const**,int *) ;
 int FUNC_5 (int,char const**,int *) ;
 int FUNC_6 (int,char const**,int *) ;
 int FUNC_7 (int,char const**,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;
 int VAR_5 ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (char*,int ,int,int) ;

__attribute__((used)) static int
FUNC_13(int VAR_6, const char *VAR_7[])
{
 int VAR_8, VAR_9, VAR_10;
 struct t4_regdump VAR_11;
 uint32_t VAR_12;

 VAR_12 = FUNC_10(VAR_3, VAR_4);
 VAR_11.data = FUNC_0(1, VAR_12);
 if (VAR_11.data == ((void*)0)) {
  FUNC_11(VAR_1, "regdump");
  return (VAR_1);
 }

 VAR_11.len = VAR_12;
 VAR_10 = FUNC_1(VAR_0, &VAR_11);
 if (VAR_10 != 0)
  return (VAR_10);

 VAR_8 = FUNC_9(VAR_11.version);
 VAR_9 = (VAR_11.version >> 10) & 0x3f;

 if (VAR_8 == 4) {
  if (VAR_9 == 0x3f)
   VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_11.data);
  else
   VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_11.data);
 } else if (VAR_8 == 5) {
  if (VAR_9 == 0x3f)
   VAR_10 = FUNC_5(VAR_6, VAR_7, VAR_11.data);
  else
   VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_11.data);
 } else if (VAR_8 == 6) {
  if (VAR_9 == 0x3f)
   VAR_10 = FUNC_7(VAR_6, VAR_7, VAR_11.data);
  else
   VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_11.data);
 } else {
  FUNC_12("%s (type %d, rev %d) is not a known card.",
      VAR_5, VAR_8, VAR_9);
  return (VAR_2);
 }

 FUNC_8(VAR_11.data);
 return (VAR_10);
}
