
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct statfs {int f_flags; } ;
struct TYPE_3__ {int fp; } ;
typedef TYPE_1__ file_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,scalar_t__,int ,int,int,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,struct statfs*) ;
 scalar_t__ FUNC_3 (int ,int *,int,int *,int ,struct timespec*) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_4(file_info_t *VAR_16)
{
 int VAR_17, VAR_18 = 0;
 file_info_t *VAR_19;
 struct timespec VAR_20;
 struct statfs VAR_21;

 VAR_20.tv_sec = 0;
 VAR_20.tv_nsec = 0;

 VAR_12 = VAR_10;
 for (VAR_17 = 0, VAR_19 = VAR_16; VAR_17 < VAR_15; VAR_17++, VAR_19++) {
  if (! VAR_19->fp)
   continue;

  if (FUNC_2(FUNC_1(VAR_19->fp), &VAR_21) == 0 &&
      (VAR_21.f_flags & VAR_6) == 0) {
   VAR_12 = VAR_11;
   return;
  }

  if (VAR_5 && FUNC_1(VAR_19->fp) != VAR_9) {
   FUNC_0(&VAR_13[VAR_18], FUNC_1(VAR_19->fp), VAR_1,
       VAR_2 | VAR_4 | VAR_3,
       VAR_7 | VAR_8, 0, 0);
   VAR_18++;
  }
  FUNC_0(&VAR_13[VAR_18], FUNC_1(VAR_19->fp), VAR_0,
      VAR_2 | VAR_4 | VAR_3, 0, 0, 0);
  VAR_18++;
 }

 if (FUNC_3(VAR_14, VAR_13, VAR_18, ((void*)0), 0, &VAR_20) < 0) {
  VAR_12 = VAR_11;
 }
}
