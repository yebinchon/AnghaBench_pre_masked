
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct tempfile {scalar_t__ fd; TYPE_1__ filename; } ;


 int FUNC_0 (struct tempfile*) ;
 int FUNC_1 (struct tempfile*) ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 struct tempfile* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,char const*) ;

struct tempfile *FUNC_5(const char *VAR_0, int VAR_1, int VAR_2)
{
 struct tempfile *VAR_3 = FUNC_3();

 FUNC_4(&VAR_3->filename, VAR_0);
 VAR_3->fd = FUNC_2(VAR_3->filename.buf, VAR_1, VAR_2);
 if (VAR_3->fd < 0) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 FUNC_0(VAR_3);
 return VAR_3;
}
