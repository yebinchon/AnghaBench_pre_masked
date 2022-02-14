
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_features {int metadata_version; int discard_passdown; int io_mode; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct cache_features *VAR_2)
{
 VAR_2->mode = VAR_1;
 VAR_2->io_mode = VAR_0;
 VAR_2->metadata_version = 1;
 VAR_2->discard_passdown = 1;
}
