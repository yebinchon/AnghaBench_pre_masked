
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct shadow_vmcs_field {int encoding; int offset; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (char*,int) ;
 struct shadow_vmcs_field* VAR_6 ;
 struct shadow_vmcs_field* VAR_7 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_10, VAR_11;

 FUNC_5(VAR_8, 0xff, VAR_2);
 FUNC_5(VAR_9, 0xff, VAR_2);

 for (VAR_10 = VAR_11 = 0; VAR_10 < VAR_4; VAR_10++) {
  struct shadow_vmcs_field VAR_12 = VAR_6[VAR_10];
  u16 VAR_13 = VAR_12.encoding;

  if (FUNC_7(VAR_13) == VAR_3 &&
      (VAR_10 + 1 == VAR_4 ||
       VAR_6[VAR_10 + 1].encoding != VAR_13 + 1))
   FUNC_6("Missing field from shadow_read_only_field %x\n",
          VAR_13 + 1);

  FUNC_1(VAR_13, VAR_8);
  if (VAR_13 & 1)



   VAR_12.offset += sizeof(u32);

  VAR_6[VAR_11++] = VAR_12;
 }
 VAR_4 = VAR_11;

 for (VAR_10 = VAR_11 = 0; VAR_10 < VAR_5; VAR_10++) {
  struct shadow_vmcs_field VAR_14 = VAR_7[VAR_10];
  u16 VAR_15 = VAR_14.encoding;

  if (FUNC_7(VAR_15) == VAR_3 &&
      (VAR_10 + 1 == VAR_5 ||
       VAR_7[VAR_10 + 1].encoding != VAR_15 + 1))
   FUNC_6("Missing field from shadow_read_write_field %x\n",
          VAR_15 + 1);

  FUNC_0(VAR_15 >= VAR_0 &&
     VAR_15 <= VAR_1,
     "Update vmcs12_write_any() to drop reserved bits from AR_BYTES");






  switch (VAR_15) {
  case 129:
   if (!FUNC_3())
    continue;
   break;
  case 128:
   if (!FUNC_4())
    continue;
   break;
  case 130:
   if (!FUNC_2())
    continue;
   break;
  default:
   break;
  }

  FUNC_1(VAR_15, VAR_9);
  FUNC_1(VAR_15, VAR_8);
  if (VAR_15 & 1)



   VAR_14.offset += sizeof(u32);

  VAR_7[VAR_11++] = VAR_14;
 }
 VAR_5 = VAR_11;
}
