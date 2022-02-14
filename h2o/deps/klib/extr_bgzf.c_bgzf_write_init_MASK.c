
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char open_mode; int compress_level; void* compressed_block; void* uncompressed_block; } ;
typedef TYPE_1__ BGZF ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static BGZF *FUNC_2(int VAR_2)
{
 BGZF *VAR_3;
 VAR_3 = FUNC_0(1, sizeof(BGZF));
 VAR_3->open_mode = 'w';
 VAR_3->uncompressed_block = FUNC_1(VAR_0);
 VAR_3->compressed_block = FUNC_1(VAR_0);
 VAR_3->compress_level = VAR_2 < 0? VAR_1 : VAR_2;
 if (VAR_3->compress_level > 9) VAR_3->compress_level = VAR_1;
 return VAR_3;
}
