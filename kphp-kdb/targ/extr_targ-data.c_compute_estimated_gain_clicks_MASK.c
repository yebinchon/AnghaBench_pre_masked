
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {int ext_users; int users; long long price; } ;


 long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;

__attribute__((used)) static double FUNC_1 (struct advert *VAR_3, long long VAR_4, long long VAR_5) {
  int VAR_6 = VAR_1;
  if (VAR_3->ext_users) {
    VAR_6 = FUNC_0 (VAR_3->ext_users);
  } else if (VAR_3->users) {
    VAR_6 = FUNC_0 (VAR_3->users * VAR_2);
  }
  return VAR_3->price * (VAR_4 * 0.1 + VAR_0) / (VAR_5 * 0.1 + VAR_6);
}
