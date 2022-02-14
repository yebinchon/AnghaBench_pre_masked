
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {TYPE_1__* pers; scalar_t__ bitmap; int flags; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ sync_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_2, char *VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_0, &VAR_2->flags)) {
  VAR_4 = FUNC_0(VAR_3, "journal\n");
 } else if (FUNC_1(VAR_1, &VAR_2->flags)) {
  VAR_4 = FUNC_0(VAR_3, "ppl\n");
 } else if (VAR_2->bitmap) {
  VAR_4 = FUNC_0(VAR_3, "bitmap\n");
 } else if (VAR_2->pers) {
  if (VAR_2->pers->sync_request)
   VAR_4 = FUNC_0(VAR_3, "resync\n");
  else
   VAR_4 = FUNC_0(VAR_3, "none\n");
 } else {
  VAR_4 = FUNC_0(VAR_3, "unknown\n");
 }

 return VAR_4;
}
