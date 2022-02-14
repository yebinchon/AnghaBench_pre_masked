
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbt_header {int bdb_offset; } ;
typedef void bdb_header ;



__attribute__((used)) static const struct bdb_header *FUNC_0(const struct vbt_header *VAR_0)
{
 const void *VAR_1 = VAR_0;

 return VAR_1 + VAR_0->bdb_offset;
}
