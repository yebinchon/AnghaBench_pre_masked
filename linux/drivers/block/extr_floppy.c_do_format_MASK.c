
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct format_descr {scalar_t__ track; scalar_t__ head; } ;
struct TYPE_5__ {scalar_t__ tracks; } ;
struct TYPE_4__ {scalar_t__ track; scalar_t__ head; int sect; int fmt_gap; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int * VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct format_descr VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(int VAR_10, struct format_descr *VAR_11)
{
 int VAR_12;

 if (FUNC_1(VAR_10))
  return -VAR_1;

 FUNC_3(VAR_10);
 if (!VAR_3 ||
     VAR_3->track > VAR_0->tracks ||
     VAR_11->track >= VAR_3->track ||
     VAR_11->head >= VAR_3->head ||
     (VAR_3->sect << 2) % (1 << FUNC_0(VAR_3)) ||
     !VAR_3->fmt_gap) {
  FUNC_2();
  return -VAR_2;
 }
 VAR_8 = *VAR_11;
 VAR_7 = 0;
 VAR_4 = &VAR_6;
 VAR_5 = &VAR_7;
 VAR_12 = FUNC_4(VAR_9, 1);
 if (VAR_12 == -VAR_1)
  return -VAR_1;
 FUNC_2();
 return VAR_12;
}
