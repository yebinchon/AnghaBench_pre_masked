
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct solaris_x86_vtoc {scalar_t__ v_sanity; scalar_t__ v_version; struct solaris_x86_slice* v_slice; int v_nparts; } ;
struct solaris_x86_slice {scalar_t__ s_size; scalar_t__ s_start; } ;
struct parsed_partitions {char* name; scalar_t__ next; scalar_t__ limit; int pp_buf; } ;
typedef int sector_t ;
typedef int Sector ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct parsed_partitions*,int ,int,int) ;
 struct solaris_x86_vtoc* FUNC_4 (struct parsed_partitions*,int,int *) ;
 int FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_7(struct parsed_partitions *VAR_4,
         sector_t VAR_5, sector_t VAR_6, int VAR_7)
{
}
