
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct outputter {int (* output_entry ) (int *,char const*,int *,int ,int) ;int (* output_image ) (int *,char const*,TYPE_1__*) ;} ;
typedef int daddr_t ;
struct TYPE_3__ {scalar_t__* boot_record_indicator; int boot_catalog_pointer; int boot_system_identifier; int identifier; } ;
typedef TYPE_1__ boot_volume_descriptor ;
typedef int boot_catalog_section_entry ;
typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t,int *,char const*,struct outputter*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,char const*,TYPE_1__*) ;
 int FUNC_7 (int *,char const*,int *,int ,int) ;
 int FUNC_8 (char*,char const*) ;

__attribute__((used)) static void
FUNC_9(FILE *VAR_7, const char *VAR_8, FILE *VAR_9,
    struct outputter *VAR_10)
{
 char VAR_11[VAR_4], *VAR_12;
 boot_volume_descriptor *VAR_13;
 daddr_t VAR_14;
 size_t VAR_15;
 int VAR_16;

 if (FUNC_5(VAR_7, 17, VAR_11) != 0)
  FUNC_2(1, "failed to read from image");

 VAR_13 = (boot_volume_descriptor *)VAR_11;
 if (FUNC_4(VAR_13->identifier, VAR_6, 5) != 0)
  FUNC_8("%s: not a valid ISO", VAR_8);
 if (VAR_13->boot_record_indicator[0] != VAR_5)
  FUNC_8("%s: not an El Torito bootable ISO", VAR_8);
 if (FUNC_4(VAR_13->boot_system_identifier, VAR_1, 23) != 0)
  FUNC_8("%s: not an El Torito bootable ISO", VAR_8);

 VAR_14 = FUNC_3(VAR_13->boot_catalog_pointer);

 if (FUNC_5(VAR_7, VAR_14, VAR_11) != 0)
  FUNC_2(1, "failed to read from image");

 VAR_12 = VAR_11;
 VAR_15 = 0;

 if (!FUNC_0(VAR_12))
  FUNC_8("%s: boot catalog checksum is invalid", VAR_8);

 if (VAR_10->output_image != ((void*)0))
  VAR_10->output_image(VAR_9, VAR_8, VAR_13);

 VAR_15 += VAR_0;
 VAR_12 = &VAR_11[VAR_15];
 if (VAR_10->output_entry != ((void*)0))
  VAR_10->output_entry(VAR_9, VAR_8,
      (boot_catalog_section_entry *)VAR_12, 0, 1);

 VAR_15 += VAR_0;

 while (VAR_15 < VAR_4) {
  VAR_12 = &VAR_11[VAR_15];

  if ((uint8_t)VAR_12[0] != VAR_3 &&
      (uint8_t)VAR_12[0] != VAR_2)
   break;

  VAR_16 = FUNC_1(VAR_11, VAR_15, VAR_9, VAR_8,
      VAR_10);

  VAR_15 += VAR_16 * VAR_0;
 }
}
