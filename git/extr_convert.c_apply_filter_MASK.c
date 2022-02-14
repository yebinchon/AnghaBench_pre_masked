
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct delayed_checkout {int dummy; } ;
struct convert_driver {char* clean; char* smudge; scalar_t__* process; } ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 int FUNC_0 (char const*,char const*,size_t,int,struct strbuf*,scalar_t__*,unsigned int const,struct delayed_checkout*) ;
 int FUNC_1 (char const*,char const*,size_t,int,struct strbuf*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, const char *VAR_3, size_t VAR_4,
   int VAR_5, struct strbuf *VAR_6, struct convert_driver *VAR_7,
   const unsigned int VAR_8,
   struct delayed_checkout *VAR_9)
{
 const char *VAR_10 = ((void*)0);

 if (!VAR_7)
  return 0;

 if (!VAR_6)
  return 1;

 if ((VAR_8 & VAR_0) && !VAR_7->process && VAR_7->clean)
  VAR_10 = VAR_7->clean;
 else if ((VAR_8 & VAR_1) && !VAR_7->process && VAR_7->smudge)
  VAR_10 = VAR_7->smudge;

 if (VAR_10 && *VAR_10)
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_10);
 else if (VAR_7->process && *VAR_7->process)
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
   VAR_7->process, VAR_8, VAR_9);

 return 0;
}
