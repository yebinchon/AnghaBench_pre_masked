
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ owner_id; scalar_t__ topic_id; scalar_t__ voting_id; } ;
typedef TYPE_1__ voting_t ;



__attribute__((used)) static inline int FUNC_0 (voting_t *VAR_0, voting_t *VAR_1) {
  if (VAR_0->owner_id < VAR_1->owner_id) {
    return -1;
  } else if (VAR_0->owner_id > VAR_1->owner_id) {
    return 1;
  } else if (VAR_0->topic_id < VAR_1->topic_id) {
    return -1;
  } else if (VAR_0->topic_id > VAR_1->topic_id) {
    return 1;
  } else if (VAR_0->voting_id < VAR_1->voting_id) {
    return -1;
  } else if (VAR_0->voting_id > VAR_1->voting_id) {
    return 1;
  } else {
    return 0;
  }
}
