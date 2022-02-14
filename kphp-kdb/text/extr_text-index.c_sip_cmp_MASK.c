
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct search_index_pair {scalar_t__ crc; scalar_t__ idx; } ;



__attribute__((used)) static inline int FUNC_0 (struct search_index_pair *VAR_0, struct search_index_pair *VAR_1) {
  if (VAR_0->crc < VAR_1->crc) {
    return -1;
  } else if (VAR_0->crc > VAR_1->crc) {
    return 1;
  } else if (VAR_0->idx < VAR_1->idx) {
    return -1;
  } else if (VAR_0->idx > VAR_1->idx) {
    return 1;
  }
  return 0;
}
