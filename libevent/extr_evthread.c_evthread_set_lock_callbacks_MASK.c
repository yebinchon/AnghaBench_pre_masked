
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evthread_lock_callbacks {scalar_t__ alloc; scalar_t__ lock_api_version; scalar_t__ supported_locktypes; scalar_t__ free; scalar_t__ lock; scalar_t__ unlock; } ;
typedef int evthread_lock_fns_ ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 struct evthread_lock_callbacks* FUNC_3 () ;
 int FUNC_4 (struct evthread_lock_callbacks*,struct evthread_lock_callbacks const*,int) ;
 int FUNC_5 (struct evthread_lock_callbacks*,int ,int) ;

int
FUNC_6(const struct evthread_lock_callbacks *VAR_2)
{
 struct evthread_lock_callbacks *VAR_3 = FUNC_3();


 if (VAR_1) {
  if (VAR_0) {
      FUNC_0(1, "evthread initialization must be called BEFORE anything else!");
  }
 }


 if (!VAR_2) {
  if (VAR_3->alloc)
   FUNC_2("Trying to disable lock functions after "
       "they have been set up will probaby not work.");
  FUNC_5(VAR_3, 0, sizeof(evthread_lock_fns_));
  return 0;
 }
 if (VAR_3->alloc) {

  if (VAR_3->lock_api_version == VAR_2->lock_api_version &&
   VAR_3->supported_locktypes == VAR_2->supported_locktypes &&
   VAR_3->alloc == VAR_2->alloc &&
   VAR_3->free == VAR_2->free &&
   VAR_3->lock == VAR_2->lock &&
   VAR_3->unlock == VAR_2->unlock) {

   return 0;
  }
  FUNC_2("Can't change lock callbacks once they have been "
      "initialized.");
  return -1;
 }
 if (VAR_2->alloc && VAR_2->free && VAR_2->lock && VAR_2->unlock) {
  FUNC_4(VAR_3, VAR_2, sizeof(evthread_lock_fns_));
  return FUNC_1(1);
 } else {
  return -1;
 }
}
