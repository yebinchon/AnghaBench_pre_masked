
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct tempfile {TYPE_1__ filename; } ;


 int FUNC_0 (struct tempfile*) ;
 int FUNC_1 (struct tempfile*) ;
 int FUNC_2 (struct tempfile*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct tempfile **VAR_0)
{
 struct tempfile *VAR_1 = *VAR_0;

 if (!FUNC_2(VAR_1))
  return;

 FUNC_0(VAR_1);
 FUNC_3(VAR_1->filename.buf);
 FUNC_1(VAR_1);
 *VAR_0 = ((void*)0);
}
