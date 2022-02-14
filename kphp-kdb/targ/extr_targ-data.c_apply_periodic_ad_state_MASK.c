
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {int flags; int retarget_time; int ad_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,struct advert*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct advert*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_2 (struct advert *VAR_5) {
  if (VAR_5->flags & VAR_0) {
    FUNC_1 (VAR_5);
    VAR_5->retarget_time = ((VAR_2 + (VAR_1 < 3600 ? 3600 : VAR_1)) / 3600) * 3600;
    if (VAR_4 > 1) {
      FUNC_0 (VAR_3, "inserting ad #%d (%p) into retarget queue, retarget_time=%d\n", VAR_5->ad_id, VAR_5, VAR_5->retarget_time);
    }
  }
}
