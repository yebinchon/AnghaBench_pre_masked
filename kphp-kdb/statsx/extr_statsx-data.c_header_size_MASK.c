
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_header_v2 {int dummy; } ;
struct index_header_v1 {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

int FUNC_1 (void) {
  if (VAR_0 == 1 || VAR_0 == 0) {
    return sizeof (struct index_header_v1);
  } else if (VAR_0 == 2) {
    return sizeof (struct index_header_v2);
  } else if (VAR_0 == 3) {
    return sizeof (struct index_header_v2);
  } else if (VAR_0 == 4) {
    return sizeof (struct index_header_v2);
  } else {
    FUNC_0 (0);
    return 0;
  }
}
