
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct resource {int start; int end; int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct resource*,int ) ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,int ,char*,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct resource *VAR_4, u32 VAR_5,
         u8 VAR_6, u8 VAR_7, u8 VAR_8,
         bool VAR_9)
{
 int VAR_10, VAR_11, VAR_12;

 if (!FUNC_5(VAR_5)) {
  FUNC_1(VAR_4, VAR_5);
  return;
 }
 if (VAR_9 && !FUNC_2(VAR_5, &VAR_12, &VAR_11)) {
  u8 VAR_13 = VAR_12 ? VAR_3 : VAR_2;
  u8 VAR_14 = VAR_11 ? VAR_1 : VAR_0;

  if (VAR_6 != VAR_13 || VAR_7 != VAR_14) {
   FUNC_4("ACPI: IRQ %d override to %s, %s\n", VAR_5,
       VAR_12 ? "level" : "edge", VAR_11 ? "low" : "high");
   VAR_6 = VAR_13;
   VAR_7 = VAR_14;
  }
 }

 VAR_4->flags = FUNC_0(VAR_6, VAR_7, VAR_8);
 VAR_10 = FUNC_3(((void*)0), VAR_5, VAR_6, VAR_7);
 if (VAR_10 >= 0) {
  VAR_4->start = VAR_10;
  VAR_4->end = VAR_10;
 } else {
  FUNC_1(VAR_4, VAR_5);
 }
}
