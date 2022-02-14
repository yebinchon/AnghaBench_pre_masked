
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; char const* name; } ;
typedef TYPE_1__ BIO_METHOD ;


 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static inline BIO_METHOD *FUNC_1(int VAR_0, const char *VAR_1)
{
 BIO_METHOD *VAR_2 = FUNC_0(1, sizeof(BIO_METHOD));

 if (VAR_2 != ((void*)0)) {
  VAR_2->type = VAR_0;
  VAR_2->name = VAR_1;
 }
 return VAR_2;
}
