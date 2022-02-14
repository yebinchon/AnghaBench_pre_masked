
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int qboolean ;
typedef scalar_t__ imgType_t ;
typedef int imgFlags_t ;
typedef int byte ;
struct TYPE_12__ {scalar_t__ textureCompression; } ;
struct TYPE_11__ {int textureCompression; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {int integer; } ;
typedef scalar_t__ GLenum ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_0 (int const*,int) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 TYPE_6__ VAR_22 ;
 TYPE_5__ VAR_23 ;
 TYPE_4__* VAR_24 ;
 TYPE_3__* VAR_25 ;
 TYPE_2__* VAR_26 ;
 TYPE_1__* VAR_27 ;

__attribute__((used)) static GLenum FUNC_1(const byte *VAR_28, int VAR_29, GLenum VAR_30, qboolean VAR_31, imgType_t VAR_32, imgFlags_t VAR_33)
{
 int VAR_34 = 3;
 GLenum VAR_35 = VAR_8;
 qboolean VAR_36 = (VAR_33 & VAR_15);
 qboolean VAR_37 = (VAR_32 == VAR_16 || VAR_32 == VAR_17);

 if (VAR_30 != VAR_14)
  return VAR_30;

 if(VAR_37)
 {
  if ((VAR_32 == VAR_17) && FUNC_0(VAR_28, VAR_29) && VAR_26->integer)
  {
   if (!VAR_36 && VAR_23.textureCompression & VAR_18)
   {
    VAR_35 = VAR_0;
   }
   else if (!VAR_36 && VAR_22.textureCompression == VAR_21)
   {
    VAR_35 = VAR_2;
   }
   else if ( VAR_27->integer == 16 )
   {
    VAR_35 = VAR_13;
   }
   else if ( VAR_27->integer == 32 )
   {
    VAR_35 = VAR_14;
   }
   else
   {
    VAR_35 = VAR_12;
   }
  }
  else
  {
   if (!VAR_36 && VAR_23.textureCompression & VAR_19)
   {
    VAR_35 = VAR_3;
   }
   else if (!VAR_36 && VAR_23.textureCompression & VAR_18)
   {
    VAR_35 = VAR_0;
   }
   else if (!VAR_36 && VAR_22.textureCompression == VAR_21)
   {
    VAR_35 = VAR_2;
   }
   else if (VAR_27->integer == 16)
   {
    VAR_35 = VAR_10;
   }
   else if (VAR_27->integer == 32)
   {
    VAR_35 = VAR_11;
   }
   else
   {
    VAR_35 = VAR_8;
   }
  }
 }
 else if(VAR_31)
 {
  if(VAR_24->integer || VAR_25->integer)
   VAR_35 = VAR_4;
  else
   VAR_35 = VAR_12;
 }
 else
 {
  if (FUNC_0(VAR_28, VAR_29))
  {
   VAR_34 = 4;
  }


  if ( VAR_34 == 3 )
  {
   if(VAR_24->integer)
   {
    if(VAR_27->integer == 16 || VAR_27->integer == 32)
     VAR_35 = VAR_5;
    else
     VAR_35 = VAR_4;
   }
   else
   {
    if ( !VAR_36 && (VAR_23.textureCompression & VAR_18) )
    {
     VAR_35 = VAR_0;
    }
    else if ( !VAR_36 && VAR_22.textureCompression == VAR_21 )
    {
     VAR_35 = VAR_1;
    }
    else if ( !VAR_36 && VAR_22.textureCompression == VAR_20 )
    {
     VAR_35 = VAR_9;
    }
    else if ( VAR_27->integer == 16 )
    {
     VAR_35 = VAR_10;
    }
    else if ( VAR_27->integer == 32 )
    {
     VAR_35 = VAR_11;
    }
    else
    {
     VAR_35 = VAR_8;
    }
   }
  }
  else if ( VAR_34 == 4 )
  {
   if(VAR_24->integer)
   {
    if(VAR_27->integer == 16 || VAR_27->integer == 32)
     VAR_35 = VAR_6;
    else
     VAR_35 = VAR_7;
   }
   else
   {
    if ( !VAR_36 && (VAR_23.textureCompression & VAR_18) )
    {
     VAR_35 = VAR_0;
    }
    else if ( !VAR_36 && VAR_22.textureCompression == VAR_21 )
    {
     VAR_35 = VAR_2;
    }
    else if ( VAR_27->integer == 16 )
    {
     VAR_35 = VAR_13;
    }
    else if ( VAR_27->integer == 32 )
    {
     VAR_35 = VAR_14;
    }
    else
    {
     VAR_35 = VAR_12;
    }
   }
  }
 }

 return VAR_35;
}
