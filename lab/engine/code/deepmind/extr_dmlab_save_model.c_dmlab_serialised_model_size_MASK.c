
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int md3Tag_t ;
typedef int md3Header_t ;
typedef int md3Frame_t ;
struct TYPE_4__ {int (* get_tag_count ) (void*) ;size_t (* get_surface_count ) (void*) ;} ;
typedef TYPE_1__ DeepmindModelGetters ;


 scalar_t__ FUNC_0 (size_t,TYPE_1__ const*,void*) ;
 int FUNC_1 (void*) ;
 size_t FUNC_2 (void*) ;

size_t FUNC_3(
    const DeepmindModelGetters* VAR_0,
    void* VAR_1) {
  size_t VAR_2 = sizeof(md3Header_t);
  VAR_2 += sizeof(md3Frame_t);
  VAR_2 += VAR_0->get_tag_count(VAR_1) * sizeof(md3Tag_t);
  size_t VAR_3 = VAR_0->get_surface_count(VAR_1);
  for (size_t VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
    VAR_2 += FUNC_0(VAR_4, VAR_0, VAR_1);
  }
  return VAR_2;
}
