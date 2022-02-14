
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dm_target {char* error; scalar_t__ max_io_len; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (char*,unsigned long long,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_1(struct dm_target *VAR_2, sector_t VAR_3)
{
 if (VAR_3 > VAR_1) {
  FUNC_0("Specified maximum size of target IO (%llu) exceeds limit (%u)",
        (unsigned long long)VAR_3, VAR_1);
  VAR_2->error = "Maximum size of target IO is too large";
  return -VAR_0;
 }

 VAR_2->max_io_len = (uint32_t) VAR_3;

 return 0;
}
