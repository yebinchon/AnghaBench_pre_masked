
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int l; int m; char* s; } ;
typedef TYPE_1__ kstring_t ;
typedef int _bgzf_file_t ;
struct TYPE_7__ {int block_offset; int block_length; scalar_t__ fp; int block_address; scalar_t__ uncompressed_block; } ;
typedef TYPE_2__ BGZF ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,unsigned char*,int) ;
 scalar_t__ FUNC_4 (char*,int) ;

int FUNC_5(BGZF *VAR_0, int VAR_1, kstring_t *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 unsigned char *VAR_5 = (unsigned char*)VAR_0->uncompressed_block;
 VAR_2->l = 0;
 do {
  if (VAR_0->block_offset >= VAR_0->block_length) {
   if (FUNC_1(VAR_0) != 0) { VAR_4 = -2; break; }
   if (VAR_0->block_length == 0) { VAR_4 = -1; break; }
  }
  for (VAR_3 = VAR_0->block_offset; VAR_3 < VAR_0->block_length && VAR_5[VAR_3] != VAR_1; ++VAR_3);
  if (VAR_3 < VAR_0->block_length) VAR_4 = 1;
  VAR_3 -= VAR_0->block_offset;
  if (VAR_2->l + VAR_3 + 1 >= VAR_2->m) {
   VAR_2->m = VAR_2->l + VAR_3 + 2;
   FUNC_2(VAR_2->m);
   VAR_2->s = (char*)FUNC_4(VAR_2->s, VAR_2->m);
  }
  FUNC_3(VAR_2->s + VAR_2->l, VAR_5 + VAR_0->block_offset, VAR_3);
  VAR_2->l += VAR_3;
  VAR_0->block_offset += VAR_3 + 1;
  if (VAR_0->block_offset >= VAR_0->block_length) {
   VAR_0->block_address = FUNC_0((_bgzf_file_t)VAR_0->fp);
   VAR_0->block_offset = 0;
   VAR_0->block_length = 0;
  }
 } while (VAR_4 == 0);
 if (VAR_2->l == 0 && VAR_4 < 0) return VAR_4;
 VAR_2->s[VAR_2->l] = 0;
 return VAR_2->l;
}
