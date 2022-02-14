
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r100_cs_track_texture {int compress_format; int roundup_h; int roundup_w; int tex_coord_type; int cpp; int txdepth; int num_levels; int height_11; int height; int width_11; int width; int use_pitch; int pitch; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct r100_cs_track_texture *VAR_0)
{
 FUNC_0("pitch                      %d\n", VAR_0->pitch);
 FUNC_0("use_pitch                  %d\n", VAR_0->use_pitch);
 FUNC_0("width                      %d\n", VAR_0->width);
 FUNC_0("width_11                   %d\n", VAR_0->width_11);
 FUNC_0("height                     %d\n", VAR_0->height);
 FUNC_0("height_11                  %d\n", VAR_0->height_11);
 FUNC_0("num levels                 %d\n", VAR_0->num_levels);
 FUNC_0("depth                      %d\n", VAR_0->txdepth);
 FUNC_0("bpp                        %d\n", VAR_0->cpp);
 FUNC_0("coordinate type            %d\n", VAR_0->tex_coord_type);
 FUNC_0("width round to power of 2  %d\n", VAR_0->roundup_w);
 FUNC_0("height round to power of 2 %d\n", VAR_0->roundup_h);
 FUNC_0("compress format            %d\n", VAR_0->compress_format);
}
