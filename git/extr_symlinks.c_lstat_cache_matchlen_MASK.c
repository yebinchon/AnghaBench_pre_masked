
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_2__ {char* buf; int len; } ;
struct cache_def {int track_flags; int prefix_len_stat_func; int flags; TYPE_1__ path; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char const*,int,char*,int,int*) ;
 int FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (struct cache_def*) ;
 int FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(struct cache_def *VAR_8,
    const char *VAR_9, int VAR_10,
    int *VAR_11, int VAR_12,
    int VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19;
 struct stat VAR_20;

 if (VAR_8->track_flags != VAR_12 ||
     VAR_8->prefix_len_stat_func != VAR_13) {





  FUNC_4(VAR_8);
  VAR_8->track_flags = VAR_12;
  VAR_8->prefix_len_stat_func = VAR_13;
  VAR_14 = VAR_15 = 0;
 } else {




  VAR_14 = VAR_15 =
   FUNC_2(VAR_9, VAR_10, VAR_8->path.buf,
        VAR_8->path.len, &VAR_17);
  *VAR_11 = VAR_8->flags & VAR_12 & (VAR_5|VAR_6);

  if (!(VAR_12 & VAR_3) && VAR_14 == VAR_10)
   VAR_14 = VAR_15 = VAR_17;

  if (*VAR_11 && VAR_14 == VAR_8->path.len)
   return VAR_14;
  *VAR_11 = VAR_12 & VAR_1;
  if (*VAR_11 && VAR_10 == VAR_14)
   return VAR_14;
 }





 *VAR_11 = VAR_1;
 VAR_16 = VAR_15;
 if (VAR_10 > VAR_8->path.len)
  FUNC_6(&VAR_8->path, VAR_10 - VAR_8->path.len);
 while (VAR_14 < VAR_10) {
  do {
   VAR_8->path.buf[VAR_14] = VAR_9[VAR_14];
   VAR_14++;
  } while (VAR_14 < VAR_10 && VAR_9[VAR_14] != '/');
  if (VAR_14 >= VAR_10 && !(VAR_12 & VAR_3))
   break;
  VAR_15 = VAR_14;
  VAR_8->path.buf[VAR_15] = '\0';

  if (VAR_15 <= VAR_13)
   VAR_19 = FUNC_5(VAR_8->path.buf, &VAR_20);
  else
   VAR_19 = FUNC_3(VAR_8->path.buf, &VAR_20);

  if (VAR_19) {
   *VAR_11 = VAR_4;
   if (VAR_7 == VAR_0)
    *VAR_11 |= VAR_5;
  } else if (FUNC_0(VAR_20.st_mode)) {
   VAR_16 = VAR_15;
   continue;
  } else if (FUNC_1(VAR_20.st_mode)) {
   *VAR_11 = VAR_6;
  } else {
   *VAR_11 = VAR_2;
  }
  break;
 }






 VAR_18 = *VAR_11 & VAR_12 & (VAR_5|VAR_6);
 if (VAR_18 && VAR_15 > 0) {
  VAR_8->path.buf[VAR_15] = '\0';
  VAR_8->path.len = VAR_15;
  VAR_8->flags = VAR_18;
 } else if ((VAR_12 & VAR_1) && VAR_16 > 0) {
  VAR_8->path.buf[VAR_16] = '\0';
  VAR_8->path.len = VAR_16;
  VAR_8->flags = VAR_1;
 } else {
  FUNC_4(VAR_8);
 }
 return VAR_14;
}
