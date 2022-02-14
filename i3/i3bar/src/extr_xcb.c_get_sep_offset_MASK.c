
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct status_block {int sep_block_width; int no_separator; } ;



__attribute__((used)) static uint32_t FUNC_0(struct status_block *VAR_0) {
    if (!VAR_0->no_separator && VAR_0->sep_block_width > 0)
        return VAR_0->sep_block_width / 2 + VAR_0->sep_block_width % 2;
    return 0;
}
