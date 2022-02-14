
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct unixware_slice {scalar_t__ s_label; int nr_sects; int start_sect; } ;
struct TYPE_2__ {struct unixware_slice* v_slice; int v_magic; } ;
struct unixware_disklabel {TYPE_1__ vtoc; int d_magic; } ;
struct parsed_partitions {char* name; scalar_t__ next; scalar_t__ limit; int pp_buf; } ;
typedef scalar_t__ sector_t ;
typedef int Sector ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct parsed_partitions*,int ,scalar_t__,scalar_t__) ;
 struct unixware_disklabel* FUNC_3 (struct parsed_partitions*,scalar_t__,int *) ;
 int FUNC_4 (char*,int,char*,char*,int) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct parsed_partitions *VAR_6,
      sector_t VAR_7, sector_t VAR_8, int VAR_9)
{
}
