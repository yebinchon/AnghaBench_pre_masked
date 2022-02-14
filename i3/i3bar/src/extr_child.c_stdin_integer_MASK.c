
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void* border_left; void* border_bottom; void* border_right; void* border_top; void* sep_block_width; void* min_width; } ;
struct TYPE_4__ {TYPE_1__ block; int last_map_key; } ;
typedef TYPE_2__ parser_ctx ;


 scalar_t__ strcasecmp (int ,char*) ;

__attribute__((used)) static int stdin_integer(void *context, long long val) {
    parser_ctx *ctx = context;
    if (strcasecmp(ctx->last_map_key, "min_width") == 0) {
        ctx->block.min_width = (uint32_t)val;
        return 1;
    }
    if (strcasecmp(ctx->last_map_key, "separator_block_width") == 0) {
        ctx->block.sep_block_width = (uint32_t)val;
        return 1;
    }
    if (strcasecmp(ctx->last_map_key, "border_top") == 0) {
        ctx->block.border_top = (uint32_t)val;
        return 1;
    }
    if (strcasecmp(ctx->last_map_key, "border_right") == 0) {
        ctx->block.border_right = (uint32_t)val;
        return 1;
    }
    if (strcasecmp(ctx->last_map_key, "border_bottom") == 0) {
        ctx->block.border_bottom = (uint32_t)val;
        return 1;
    }
    if (strcasecmp(ctx->last_map_key, "border_left") == 0) {
        ctx->block.border_left = (uint32_t)val;
        return 1;
    }

    return 1;
}
