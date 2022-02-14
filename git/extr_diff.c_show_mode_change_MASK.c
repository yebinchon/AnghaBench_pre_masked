
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct diff_options {int dummy; } ;
struct diff_filepair {TYPE_2__* two; TYPE_1__* one; } ;
struct TYPE_4__ {scalar_t__ mode; int path; } ;
struct TYPE_3__ {scalar_t__ mode; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct diff_options*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct strbuf*,int *,int ) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static void FUNC_5(struct diff_options *VAR_2, struct diff_filepair *VAR_3,
  int VAR_4)
{
 if (VAR_3->one->mode && VAR_3->two->mode && VAR_3->one->mode != VAR_3->two->mode) {
  struct strbuf VAR_5 = VAR_1;
  FUNC_3(&VAR_5, " mode change %06o => %06o",
       VAR_3->one->mode, VAR_3->two->mode);
  if (VAR_4) {
   FUNC_2(&VAR_5, ' ');
   FUNC_1(VAR_3->two->path, &VAR_5, ((void*)0), 0);
  }
  FUNC_2(&VAR_5, '\n');
  FUNC_0(VAR_2, VAR_0,
     VAR_5.buf, VAR_5.len, 0);
  FUNC_4(&VAR_5);
 }
}
