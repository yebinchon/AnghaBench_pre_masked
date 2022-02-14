
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int it_size; unsigned long it_base; int it_blocksize; int it_map; int * it_ops; scalar_t__ it_index; int it_page_shift; scalar_t__ it_offset; scalar_t__ it_busno; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int ,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 VAR_4.it_busno = 0;
 VAR_4.it_offset = 0;

 VAR_4.it_size = VAR_2 / sizeof(u32);
 VAR_4.it_page_shift = VAR_0;


 VAR_4.it_base = (unsigned long)VAR_1;
 VAR_4.it_index = 0;
 VAR_4.it_blocksize = 1;
 VAR_4.it_ops = &VAR_3;
 FUNC_0(&VAR_4, -1, 0, 0);




 FUNC_1(VAR_4.it_size - 1, VAR_4.it_map);
}
