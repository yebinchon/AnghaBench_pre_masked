
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crlf_attrs {scalar_t__ auto_crlf; scalar_t__ safe_crlf; scalar_t__ core_eol; scalar_t__ crlf_action; scalar_t__ attr_action; } ;
typedef int git_filter_source ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (scalar_t__*,int ,int ) ;
 int FUNC_5 (struct crlf_attrs*,int ,int) ;
 scalar_t__ FUNC_6 (struct crlf_attrs*) ;

__attribute__((used)) static int FUNC_7(
 struct crlf_attrs *VAR_19,
 const char **VAR_20,
 const git_filter_source *VAR_21)
{
 int VAR_22;

 FUNC_5(VAR_19, 0, sizeof(struct crlf_attrs));

 if ((VAR_22 = FUNC_4(&VAR_19->auto_crlf,
   FUNC_3(VAR_21), VAR_3)) < 0 ||
  (VAR_22 = FUNC_4(&VAR_19->safe_crlf,
   FUNC_3(VAR_21), VAR_5)) < 0 ||
  (VAR_22 = FUNC_4(&VAR_19->core_eol,
   FUNC_3(VAR_21), VAR_4)) < 0)
  return VAR_22;


 if ((FUNC_2(VAR_21) & VAR_16) &&
  VAR_19->safe_crlf == VAR_17)
  VAR_19->safe_crlf = VAR_18;

 if (VAR_20) {

  VAR_19->crlf_action = FUNC_0(VAR_20[2]);

  if (VAR_19->crlf_action == VAR_13)
   VAR_19->crlf_action = FUNC_0(VAR_20[0]);

  if (VAR_19->crlf_action != VAR_9) {

   int VAR_23 = FUNC_1(VAR_20[1]);

   if (VAR_19->crlf_action == VAR_6 && VAR_23 == VAR_15)
    VAR_19->crlf_action = VAR_8;
   else if (VAR_19->crlf_action == VAR_6 && VAR_23 == VAR_14)
    VAR_19->crlf_action = VAR_7;
   else if (VAR_23 == VAR_15)
    VAR_19->crlf_action = VAR_12;
   else if (VAR_23 == VAR_14)
    VAR_19->crlf_action = VAR_11;
  }

  VAR_19->attr_action = VAR_19->crlf_action;
 } else {
  VAR_19->crlf_action = VAR_13;
 }

 if (VAR_19->crlf_action == VAR_10)
  VAR_19->crlf_action = FUNC_6(VAR_19) ? VAR_11 : VAR_12;
 if (VAR_19->crlf_action == VAR_13 && VAR_19->auto_crlf == VAR_0)
  VAR_19->crlf_action = VAR_9;
 if (VAR_19->crlf_action == VAR_13 && VAR_19->auto_crlf == VAR_2)
  VAR_19->crlf_action = VAR_7;
 if (VAR_19->crlf_action == VAR_13 && VAR_19->auto_crlf == VAR_1)
  VAR_19->crlf_action = VAR_8;

 return 0;
}
