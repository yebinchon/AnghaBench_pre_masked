
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct tempfile {scalar_t__ fd; TYPE_1__ filename; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tempfile*) ;
 scalar_t__ FUNC_2 (int ,int) ;

int FUNC_3(struct tempfile *VAR_2)
{
 if (!FUNC_1(VAR_2))
  FUNC_0("reopen_tempfile called for an inactive object");
 if (0 <= VAR_2->fd)
  FUNC_0("reopen_tempfile called for an open object");
 VAR_2->fd = FUNC_2(VAR_2->filename.buf, VAR_1|VAR_0);
 return VAR_2->fd;
}
