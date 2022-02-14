
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_3__ {int const width; int const height; int redBits; int greenBits; int blueBits; int refreshRate; } ;
typedef TYPE_1__ GLFWvidmode ;


 int FUNC_0 (int const,int const) ;
 int FUNC_1 (char*,int,char*,int const,int const,int,int const,int const,int,int,int,int) ;

__attribute__((used)) static const char* FUNC_2(const GLFWvidmode* VAR_0)
{
    static char VAR_1[512];
    const int VAR_2 = FUNC_0(VAR_0->width, VAR_0->height);

    FUNC_1(VAR_1,
             sizeof(VAR_1),
             "%i x %i x %i (%i:%i) (%i %i %i) %i Hz",
             VAR_0->width, VAR_0->height,
             VAR_0->redBits + VAR_0->greenBits + VAR_0->blueBits,
             VAR_0->width / VAR_2, VAR_0->height / VAR_2,
             VAR_0->redBits, VAR_0->greenBits, VAR_0->blueBits,
             VAR_0->refreshRate);

    VAR_1[sizeof(VAR_1) - 1] = '\0';
    return VAR_1;
}
