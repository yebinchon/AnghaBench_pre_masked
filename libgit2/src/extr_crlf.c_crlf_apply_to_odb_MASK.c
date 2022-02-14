
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct crlf_attrs {scalar_t__ crlf_action; } ;
typedef int git_filter_source ;
struct TYPE_4__ {int crlf; } ;
typedef TYPE_1__ git_buf_text_stats ;
typedef int git_buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct crlf_attrs*,int const*,TYPE_1__*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (TYPE_1__*,int const*,int) ;
 scalar_t__ FUNC_4 (int const*) ;

__attribute__((used)) static int FUNC_5(
 struct crlf_attrs *VAR_5,
 git_buf *VAR_6,
 const git_buf *VAR_7,
 const git_filter_source *VAR_8)
{
 git_buf_text_stats VAR_9;
 bool VAR_10;
 int VAR_11;


 if (VAR_5->crlf_action == VAR_3 || !FUNC_1(VAR_7))
  return VAR_4;

 VAR_10 = FUNC_3(&VAR_9, VAR_7, 0);




 if (VAR_5->crlf_action == VAR_0 ||
  VAR_5->crlf_action == VAR_2 ||
  VAR_5->crlf_action == VAR_1) {

  if (VAR_10)
   return VAR_4;





  if (FUNC_4(VAR_8))
   return VAR_4;
 }

 if ((VAR_11 = FUNC_0(VAR_5, VAR_8, &VAR_9)) < 0)
  return VAR_11;


 if (!VAR_9.crlf)
  return VAR_4;


 return FUNC_2(VAR_6, VAR_7);
}
