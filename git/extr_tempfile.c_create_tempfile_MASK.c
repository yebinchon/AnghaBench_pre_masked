
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct tempfile {scalar_t__ fd; TYPE_1__ filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tempfile*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct tempfile*) ;
 int FUNC_3 (struct tempfile**) ;
 int VAR_5 ;
 int FUNC_4 (char*,int ) ;
 struct tempfile* FUNC_5 () ;
 void* FUNC_6 (int ,int,int) ;
 int FUNC_7 (TYPE_1__*,char const*) ;

struct tempfile *FUNC_8(const char *VAR_6)
{
 struct tempfile *VAR_7 = FUNC_5();

 FUNC_7(&VAR_7->filename, VAR_6);
 VAR_7->fd = FUNC_6(VAR_7->filename.buf,
       VAR_4 | VAR_2 | VAR_3 | VAR_1, 0666);
 if (VAR_1 && VAR_7->fd < 0 && VAR_5 == VAR_0)

  VAR_7->fd = FUNC_6(VAR_7->filename.buf,
        VAR_4 | VAR_2 | VAR_3, 0666);
 if (VAR_7->fd < 0) {
  FUNC_2(VAR_7);
  return ((void*)0);
 }
 FUNC_0(VAR_7);
 if (FUNC_1(VAR_7->filename.buf)) {
  int VAR_8 = VAR_5;
  FUNC_4("cannot fix permission bits on %s", VAR_7->filename.buf);
  FUNC_3(&VAR_7);
  VAR_5 = VAR_8;
  return ((void*)0);
 }

 return VAR_7;
}
