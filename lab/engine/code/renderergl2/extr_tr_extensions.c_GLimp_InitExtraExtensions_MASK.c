
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int version ;
typedef int qboolean ;
struct TYPE_16__ {int framebufferObject; int vertexArrayObject; int textureFloat; size_t depthClamp; int seamlessCubeMap; scalar_t__ memInfo; int textureCompression; int swizzleNormalmap; int directStateAccess; int glslMinorVersion; int glslMajorVersion; int maxColorAttachments; int maxRenderbufferSize; void* framebufferMultisample; void* framebufferBlit; void* occlusionQuery; void* intelGraphics; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {int (* Printf ) (int ,char const*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_8__ VAR_15 ;
 void* VAR_16 ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 void* VAR_17 ;
 TYPE_7__* VAR_18 ;
 TYPE_6__* VAR_19 ;
 TYPE_5__* VAR_20 ;
 TYPE_4__* VAR_21 ;
 TYPE_3__* VAR_22 ;
 TYPE_2__* VAR_23 ;
 TYPE_1__ VAR_24 ;
 int FUNC_5 (char*,char*,int *,int *) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char const*,char*) ;
 int FUNC_8 (int ,char const*,char*) ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int ,char const*,char*) ;
 int FUNC_11 (int ,char const*,char*) ;
 int FUNC_12 (int ,char const*,char*) ;
 int FUNC_13 (int ,char const*,char*) ;
 int FUNC_14 (int ,char const*,char*) ;
 int FUNC_15 (int ,char const*,char*) ;
 int FUNC_16 (int ,char const*,char*) ;
 int FUNC_17 (int ,char const*,char*) ;
 int FUNC_18 (int ,char const*,char*) ;
 int FUNC_19 (int ,char const*,char*) ;
 int FUNC_20 (int ,char const*,char*) ;
 int FUNC_21 (int ,char const*,char*) ;
 int FUNC_22 (int ,char const*,char*) ;
 int FUNC_23 (int ,char const*,char*) ;
 int FUNC_24 (int ,char const*,char*) ;
 int FUNC_25 (int ,char const*,char*) ;
 int FUNC_26 (int ,char const*,char*) ;
 int FUNC_27 (int ,char const*,char*) ;
 int FUNC_28 (int ,char const*,char*) ;

void FUNC_29(void)
{
 char *VAR_25;
 const char* VAR_26[3] = { "...ignoring %s\n", "...using %s\n", "...%s not found\n" };
 qboolean VAR_27;
 qboolean VAR_28;

 VAR_27 = FUNC_0( 3, 0 );
 VAR_28 = FUNC_0( 3, 2 );


 VAR_15.intelGraphics = VAR_16;
 if (FUNC_6((char *)FUNC_4(VAR_2), "Intel"))
  VAR_15.intelGraphics = VAR_17;



 VAR_11;






 VAR_15.occlusionQuery = VAR_17;
 VAR_9;


 VAR_25 = "GL_ARB_framebuffer_object";
 VAR_15.framebufferObject = VAR_16;
 VAR_15.framebufferBlit = VAR_16;
 VAR_15.framebufferMultisample = VAR_16;
 if (VAR_27 || FUNC_2(VAR_25))
 {
  VAR_15.framebufferObject = !!VAR_22->integer;
  VAR_15.framebufferBlit = VAR_17;
  VAR_15.framebufferMultisample = VAR_17;

  FUNC_3(VAR_1, &VAR_15.maxRenderbufferSize);
  FUNC_3(VAR_0, &VAR_15.maxColorAttachments);

  VAR_8;

  VAR_24.Printf(VAR_7, VAR_26[VAR_15.framebufferObject], VAR_25);
 }
 else
 {
  VAR_24.Printf(VAR_7, VAR_26[2], VAR_25);
 }


 VAR_25 = "GL_ARB_vertex_array_object";
 VAR_15.vertexArrayObject = VAR_16;
 if (VAR_27 || FUNC_2(VAR_25))
 {
  if (VAR_27)
  {

   VAR_15.vertexArrayObject = VAR_17;
  }
  else
  {
   VAR_15.vertexArrayObject = !!VAR_19->integer;
  }

  VAR_10;

  VAR_24.Printf(VAR_7, VAR_26[VAR_15.vertexArrayObject], VAR_25);
 }
 else
 {
  VAR_24.Printf(VAR_7, VAR_26[2], VAR_25);
 }


 VAR_25 = "GL_ARB_texture_float";
 VAR_15.textureFloat = VAR_16;
 if (VAR_27 || FUNC_2(VAR_25))
 {
  VAR_15.textureFloat = !!VAR_23->integer;

  VAR_24.Printf(VAR_7, VAR_26[VAR_15.textureFloat], VAR_25);
 }
 else
 {
  VAR_24.Printf(VAR_7, VAR_26[2], VAR_25);
 }


 VAR_25 = "GL_ARB_depth_clamp";
 VAR_15.depthClamp = VAR_16;
 if (VAR_28 || FUNC_2(VAR_25))
 {
  VAR_15.depthClamp = VAR_17;

  VAR_24.Printf(VAR_7, VAR_26[VAR_15.depthClamp], VAR_25);
 }
 else
 {
  VAR_24.Printf(VAR_7, VAR_26[2], VAR_25);
 }


 VAR_25 = "GL_ARB_seamless_cube_map";
 VAR_15.seamlessCubeMap = VAR_16;
 if (VAR_28 || FUNC_2(VAR_25))
 {
  VAR_15.seamlessCubeMap = !!VAR_18->integer;

  VAR_24.Printf(VAR_7, VAR_26[VAR_15.seamlessCubeMap], VAR_25);
 }
 else
 {
  VAR_24.Printf(VAR_7, VAR_26[2], VAR_25);
 }


 if (1)
 {
  char VAR_29[256];

  FUNC_1(VAR_29, (char *)FUNC_4(VAR_3), sizeof(VAR_29));

  FUNC_5(VAR_29, "%d.%d", &VAR_15.glslMajorVersion, &VAR_15.glslMinorVersion);

  VAR_24.Printf(VAR_7, "...using GLSL version %s\n", VAR_29);
 }

 VAR_15.memInfo = VAR_5;


 VAR_25 = "GL_NVX_gpu_memory_info";
 if( FUNC_2( VAR_25 ) )
 {
  VAR_15.memInfo = VAR_6;

  VAR_24.Printf(VAR_7, VAR_26[1], VAR_25);
 }
 else
 {
  VAR_24.Printf(VAR_7, VAR_26[2], VAR_25);
 }


 VAR_25 = "GL_ATI_meminfo";
 if( FUNC_2( VAR_25 ) )
 {
  if (VAR_15.memInfo == VAR_5)
  {
   VAR_15.memInfo = VAR_4;

   VAR_24.Printf(VAR_7, VAR_26[1], VAR_25);
  }
  else
  {
   VAR_24.Printf(VAR_7, VAR_26[0], VAR_25);
  }
 }
 else
 {
  VAR_24.Printf(VAR_7, VAR_26[2], VAR_25);
 }

 VAR_15.textureCompression = VAR_13;


 VAR_25 = "GL_ARB_texture_compression_rgtc";
 if (FUNC_2(VAR_25))
 {
  qboolean VAR_30 = VAR_20->integer >= 1;

  if (VAR_30)
   VAR_15.textureCompression |= VAR_14;

  VAR_24.Printf(VAR_7, VAR_26[VAR_30], VAR_25);
 }
 else
 {
  VAR_24.Printf(VAR_7, VAR_26[2], VAR_25);
 }

 VAR_15.swizzleNormalmap = VAR_20->integer && !(VAR_15.textureCompression & VAR_14);


 VAR_25 = "GL_ARB_texture_compression_bptc";
 if (FUNC_2(VAR_25))
 {
  qboolean VAR_31 = VAR_20->integer >= 2;

  if (VAR_31)
   VAR_15.textureCompression |= VAR_12;

  VAR_24.Printf(VAR_7, VAR_26[VAR_31], VAR_25);
 }
 else
 {
  VAR_24.Printf(VAR_7, VAR_26[2], VAR_25);
 }


 VAR_25 = "GL_EXT_direct_state_access";
 VAR_15.directStateAccess = VAR_16;
 if (FUNC_2(VAR_25))
 {
  VAR_15.directStateAccess = !!VAR_21->integer;


  if (VAR_15.directStateAccess)
  {
   VAR_11;
  }

  VAR_24.Printf(VAR_7, VAR_26[VAR_15.directStateAccess], VAR_25);
 }
 else
 {
  VAR_24.Printf(VAR_7, VAR_26[2], VAR_25);
 }


}
