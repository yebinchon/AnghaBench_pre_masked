
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char open_mode; int cache; void* compressed_block; void* uncompressed_block; } ;
typedef TYPE_1__ BGZF ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static BGZF *FUNC_3()
{
 BGZF *VAR_2;
 VAR_2 = FUNC_0(1, sizeof(BGZF));
 VAR_2->open_mode = 'r';
 VAR_2->uncompressed_block = FUNC_2(VAR_0);
 VAR_2->compressed_block = FUNC_2(VAR_0);



 return VAR_2;
}
