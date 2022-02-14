
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct crlf_attrs {scalar_t__ crlf_action; } ;
struct TYPE_3__ {scalar_t__ lf; scalar_t__ crlf; scalar_t__ cr; } ;
typedef TYPE_1__ git_buf_text_stats ;
typedef int git_buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*,int const*,int) ;
 int FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (struct crlf_attrs*) ;

__attribute__((used)) static int FUNC_4(
 struct crlf_attrs *VAR_5,
 git_buf *VAR_6,
 const git_buf *VAR_7)
{
 git_buf_text_stats VAR_8;
 bool VAR_9;


 if (FUNC_0(VAR_7) == 0 || FUNC_3(VAR_5) != VAR_3)
  return VAR_4;

 VAR_9 = FUNC_1(&VAR_8, VAR_7, 0);


 if (VAR_8.lf == 0 || VAR_8.lf == VAR_8.crlf)
  return VAR_4;

 if (VAR_5->crlf_action == VAR_0 ||
  VAR_5->crlf_action == VAR_2 ||
  VAR_5->crlf_action == VAR_1) {


  if (VAR_8.cr > 0)
   return VAR_4;


  if (VAR_9)
   return VAR_4;
 }

 return FUNC_2(VAR_6, VAR_7);
}
