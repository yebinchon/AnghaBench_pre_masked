
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; } ;
struct snapshot {int mmapped; int buf; scalar_t__ eof; int start; TYPE_1__* refs; int validity; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int path; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,int ) ;
 size_t FUNC_4 (int,int ,size_t) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int *,size_t,int ,int ,int,int ) ;
 size_t FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct snapshot *VAR_8)
{
 int VAR_9;
 struct stat VAR_10;
 size_t VAR_11;
 ssize_t VAR_12;

 VAR_9 = FUNC_3(VAR_8->refs->path, VAR_3);
 if (VAR_9 < 0) {
  if (VAR_6 == VAR_0) {







   return 0;
  } else {
   FUNC_1("couldn't read %s", VAR_8->refs->path);
  }
 }

 FUNC_5(&VAR_8->validity, VAR_9);

 if (FUNC_2(VAR_9, &VAR_10) < 0)
  FUNC_1("couldn't stat %s", VAR_8->refs->path);
 VAR_11 = FUNC_8(VAR_10.st_size);

 if (!VAR_11) {
  FUNC_0(VAR_9);
  return 0;
 } else if (VAR_7 == VAR_2 || VAR_11 <= VAR_5) {
  VAR_8->buf = FUNC_6(VAR_11);
  VAR_12 = FUNC_4(VAR_9, VAR_8->buf, VAR_11);
  if (VAR_12 < 0 || VAR_12 != VAR_11)
   FUNC_1("couldn't read %s", VAR_8->refs->path);
  VAR_8->mmapped = 0;
 } else {
  VAR_8->buf = FUNC_7(((void*)0), VAR_11, VAR_4, VAR_1, VAR_9, 0);
  VAR_8->mmapped = 1;
 }
 FUNC_0(VAR_9);

 VAR_8->start = VAR_8->buf;
 VAR_8->eof = VAR_8->buf + VAR_11;

 return 1;
}
