
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct bdb_mipi_sequence {scalar_t__* data; int version; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bdb_mipi_sequence const*) ;

__attribute__((used)) static const u8 *
FUNC_2(const struct bdb_mipi_sequence *VAR_1,
     u16 VAR_2, u32 *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_1);
 const u8 *VAR_5 = &VAR_1->data[0];
 u8 VAR_6;
 u32 VAR_7;
 int VAR_8 = VAR_1->version >= 3 ? 5 : 3;
 int VAR_9 = 0;
 int VAR_10;


 if (VAR_1->version >= 3)
  VAR_5 += 4;

 for (VAR_10 = 0; VAR_10 < VAR_0 && VAR_9 < VAR_4; VAR_10++) {
  if (VAR_9 + VAR_8 > VAR_4) {
   FUNC_0("Invalid sequence block (header)\n");
   return ((void*)0);
  }

  VAR_6 = *(VAR_5 + VAR_9);
  if (VAR_1->version >= 3)
   VAR_7 = *((const u32 *)(VAR_5 + VAR_9 + 1));
  else
   VAR_7 = *((const u16 *)(VAR_5 + VAR_9 + 1));

  VAR_9 += VAR_8;

  if (VAR_9 + VAR_7 > VAR_4) {
   FUNC_0("Invalid sequence block\n");
   return ((void*)0);
  }

  if (VAR_6 == VAR_2) {
   *VAR_3 = VAR_7;
   return VAR_5 + VAR_9;
  }

  VAR_9 += VAR_7;
 }

 FUNC_0("Sequence block detected but no valid configuration\n");

 return ((void*)0);
}
