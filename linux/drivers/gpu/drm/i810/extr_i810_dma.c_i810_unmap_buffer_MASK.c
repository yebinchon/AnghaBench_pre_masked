
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_buf {scalar_t__ total; TYPE_1__* dev_private; } ;
struct TYPE_2__ {scalar_t__ currently_mapped; int * virtual; } ;
typedef TYPE_1__ drm_i810_buf_priv_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long,size_t) ;

__attribute__((used)) static int FUNC_1(struct drm_buf *VAR_3)
{
 drm_i810_buf_priv_t *VAR_4 = VAR_3->dev_private;
 int VAR_5 = 0;

 if (VAR_4->currently_mapped != VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_0((unsigned long)VAR_4->virtual,
       (size_t) VAR_3->total);

 VAR_4->currently_mapped = VAR_2;
 VAR_4->virtual = ((void*)0);

 return VAR_5;
}
